#import <PEGKit/PKParser.h>

enum {
    TDNSPREDICATE_TOKEN_KIND_ALL = 14,
    TDNSPREDICATE_TOKEN_KIND_FALSEPREDICATE = 15,
    TDNSPREDICATE_TOKEN_KIND_NOT_UPPER = 16,
    TDNSPREDICATE_TOKEN_KIND_OPEN_CURLY = 17,
    TDNSPREDICATE_TOKEN_KIND_HASH_ROCKET = 18,
    TDNSPREDICATE_TOKEN_KIND_GE_SYM = 19,
    TDNSPREDICATE_TOKEN_KIND_DOUBLE_AMPERSAND = 20,
    TDNSPREDICATE_TOKEN_KIND_TRUEPREDICATE = 21,
    TDNSPREDICATE_TOKEN_KIND_AND_UPPER = 22,
    TDNSPREDICATE_TOKEN_KIND_CLOSE_CURLY = 23,
    TDNSPREDICATE_TOKEN_KIND_TRUE = 24,
    TDNSPREDICATE_TOKEN_KIND_NOT_EQUAL = 25,
    TDNSPREDICATE_TOKEN_KIND_OR_UPPER = 26,
    TDNSPREDICATE_TOKEN_KIND_BANG = 27,
    TDNSPREDICATE_TOKEN_KIND_SOME = 28,
    TDNSPREDICATE_TOKEN_KIND_INKEYWORD = 29,
    TDNSPREDICATE_TOKEN_KIND_BEGINSWITH = 30,
    TDNSPREDICATE_TOKEN_KIND_LT = 31,
    TDNSPREDICATE_TOKEN_KIND_EQUALS = 32,
    TDNSPREDICATE_TOKEN_KIND_CONTAINS = 33,
    TDNSPREDICATE_TOKEN_KIND_GT = 34,
    TDNSPREDICATE_TOKEN_KIND_OPEN_PAREN = 35,
    TDNSPREDICATE_TOKEN_KIND_CLOSE_PAREN = 36,
    TDNSPREDICATE_TOKEN_KIND_DOUBLE_PIPE = 37,
    TDNSPREDICATE_TOKEN_KIND_MATCHES = 38,
    TDNSPREDICATE_TOKEN_KIND_COMMA = 39,
    TDNSPREDICATE_TOKEN_KIND_LIKE = 40,
    TDNSPREDICATE_TOKEN_KIND_ANY = 41,
    TDNSPREDICATE_TOKEN_KIND_ENDSWITH = 42,
    TDNSPREDICATE_TOKEN_KIND_FALSE = 43,
    TDNSPREDICATE_TOKEN_KIND_LE_SYM = 44,
    TDNSPREDICATE_TOKEN_KIND_BETWEEN = 45,
    TDNSPREDICATE_TOKEN_KIND_EL_SYM = 46,
    TDNSPREDICATE_TOKEN_KIND_NOT_EQUALS = 47,
    TDNSPREDICATE_TOKEN_KIND_NONE = 48,
    TDNSPREDICATE_TOKEN_KIND_DOUBLE_EQUALS = 49,
};

@interface TDNSPredicateParser : PKParser

@end

