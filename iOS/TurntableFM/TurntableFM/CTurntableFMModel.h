//
//  CTurntableFMModel.h
//  TurntableFM
//
//  Created by Jonathan Wight on 07/16/11.
//  Copyright 2011 toxicsoftware.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CTurntableFMSocket;

@interface CTurntableFMModel : NSObject

@property (readonly, nonatomic, retain) NSDictionary *userInfo;
@property (readonly, nonatomic, retain) NSArray *rooms;
@property (readonly, nonatomic, retain) NSDictionary *room;

+ (CTurntableFMModel *)sharedInstance;

- (void)loginWithFacebookAccessToken:(NSString *)inFacebookAccessToken;

- (void)registerWithRoom:(NSDictionary *)inRoomDescription handler:(void (^)(void))inHandler;
- (void)unregisterWithRoom:(NSDictionary *)inRoomDescription handler:(void (^)(void))inHandler;

- (NSURL *)URLForSong:(NSDictionary *)inSong preview:(BOOL)inPreview;

- (void)playSong:(NSDictionary *)inSong preview:(BOOL)inPreview;

@end
