//
//  Options.h
//  venus
//
//  Created by Jac Chen on 2018/8/1.
//  Copyright © 2018 Matrix. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Options : NSObject

@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *userEmail;
@property (nonatomic, copy) NSString *roomNumber;

- (NSString *)getServerAddress;

@end
