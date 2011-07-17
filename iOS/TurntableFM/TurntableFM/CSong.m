//
//  CSong.m
//  TurntableFM
//
//  Created by Jonathan Wight on 07/17/11.
//  Copyright 2011 toxicsoftware.com. All rights reserved.
//

#import "CSong.h"

@implementation CSong

- (NSString *)songID
    {
    return([self.parameters objectForKey:@"songID"]);
    }

- (NSString *)name
    {
    return([self.parameters valueForKeyPath:@"metadata.song"]);
    }

@end
