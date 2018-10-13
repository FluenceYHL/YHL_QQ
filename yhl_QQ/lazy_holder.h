#ifndef LAZY_HOLDER_H
#define LAZY_HOLDER_H
#include <mutex>
#include <functional>
#include <iostream>
#include "singleton.h"

namespace YHL {

    class lazy_holder {
    public:
        template<typename F, typename... Args>
        lazy_holder(F&& fun, Args&&... args) {
            std::cout << "lazy_holder\n";
            fun(std::forward<Args>(args)...);
        }
    };

    template<typename F, typename... Args>
    inline void call_once(F&& fun, Args&&... args) {
        YHL::singleton<lazy_holder>::getInstance(
            std::forward<F>(fun), std::forward<Args>(args)...);
    }

}

#endif // LAZY_HOLDER_H
