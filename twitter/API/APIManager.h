//
//  APIManager.h
//  twitter
//
//  Created by emersonmalca on 5/28/18.
//  Copyright © 2018 Emerson Malca. All rights reserved.
//

#import "BDBOAuth1SessionManager.h"
#import "BDBOAuth1SessionManager+SFAuthenticationSession.h"
#import "Tweet.h"

@interface APIManager : BDBOAuth1SessionManager

+ (instancetype)shared;

- (void)getHomeTimelineWithCompletion:(void(^)(NSArray *tweets, NSError *error))completion;

//post something
- (void)postStatusWithText:(NSString *)text completion:(void (^)(Tweet *, NSError *))completion;
//favorite (like/unlike) a post
- (void)favorite:(Tweet *)tweet completion:(void (^)(Tweet *, NSError *))completion;
- (void)unfavorite:(Tweet *)tweet completion:(void (^)(Tweet *, NSError *))completion;
//retweet/undo retweet
- (void)retweet:(Tweet *)tweet completion:(void (^)(Tweet *, NSError *))completion;
- (void)unretweet:(Tweet *)tweet completion:(void (^)(Tweet *, NSError *))completion;

@end
