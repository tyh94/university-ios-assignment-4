//
//  Serilisable.h
//  university-ios-assignment-4
//
//  Created by Admin on 11.07.16.
//  Copyright © 2016 Admin. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol Serilisable <NSObject>

- (NSString *)serialiseWithError:(NSError **)error;

@end
