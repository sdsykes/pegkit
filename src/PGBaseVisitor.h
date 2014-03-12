//
//  PKBaseVisitor.h
//  PEGKit
//
//  Created by Todd Ditchendorf on 3/16/13.
//
//

#import "PGNodeVisitor.h"

// convenience
#import "PKBaseNode.h"
#import "PKRootNode.h"
#import "PKDefinitionNode.h"
#import "PKReferenceNode.h"
#import "PKConstantNode.h"
#import "PKDelimitedNode.h"
#import "PKLiteralNode.h"
#import "PKPatternNode.h"
#import "PKCompositeNode.h"
#import "PKCollectionNode.h"
#import "PKAlternationNode.h"
#import "PKOptionalNode.h"
#import "PKMultipleNode.h"
#import "PKActionNode.h"

@interface PGBaseVisitor : NSObject <PGNodeVisitor>

- (void)recurse:(PKBaseNode *)node;

@property (nonatomic, retain) PKBaseNode *rootNode;
@property (nonatomic, retain) NSMutableDictionary *symbolTable;
@end