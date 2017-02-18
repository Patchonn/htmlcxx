#include <cctype>
// TODO
namespace htmlcxx {
namespace HTML {

static inline int isnamestartchar(int ch){
    return std::isalpha(ch) || ch == '_';
}

static inline int isnamechar(int ch){
    return std::isalnum(ch) || ch == '_' || ch == '-' || ch == '.';
}

}
}
