//
//  EvamObjCExceptionCatcher.h
//  EvamiOSCommonKit
//
//  Catches NSException (e.g. Core Data `_introspectLastErrorAndThrow`, or a nib
//  decoder failing to resolve a view class) that Swift `do/catch` cannot see.
//  Used around store fetch/save and around the in-app presentation path.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EvamObjCExceptionCatcher : NSObject

/// Runs `block`, reporting an NSException as an NSError in the Core Data domain.
+ (BOOL)runBlock:(void (^)(void))block error:(NSError **)error;

/// Same, for callers that need their own error domain.
+ (BOOL)runBlock:(void (^)(void))block
          domain:(NSString *)domain
           error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
