#ifndef SINGLETON_H
#define SINGLETON_H
#include <memory>
#include <mutex>
#include <functional>

namespace YHL {

    template<typename T>
    class singleton final {
    private:
        static std::shared_ptr<T> instance;

        singleton() = default;
        singleton(const singleton&) = delete;
        singleton(singleton&&) = delete;

    public:
        template<typename... Args>
        static std::shared_ptr<T> getInstance(Args&&... args) {

            static std::once_flag flag;

            std::call_once(flag, [&]{
                if(instance == nullptr) {
                    instance = std::make_shared<T>(std::forward<Args>(args)...);
                }
            });
            return instance;
        }

        template<typename... Args>
        static T* getRaw(Args&&... args) {
            return getInstance(args...).get();
        }
    } ;
    template<typename T>
    std::shared_ptr<T> singleton<T>::instance = nullptr;
}

#endif // SINGLETON_H
