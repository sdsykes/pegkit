#import <PEGKit/PKParser.h>

enum {
    GREEDYFAILURENESTED_TOKEN_KIND_COMMA = 14,
    GREEDYFAILURENESTED_TOKEN_KIND_COLON = 15,
    GREEDYFAILURENESTED_TOKEN_KIND_RCURLY = 16,
    GREEDYFAILURENESTED_TOKEN_KIND_LCURLY = 17,
};

@interface GreedyFailureNestedParser : PKParser

@end

