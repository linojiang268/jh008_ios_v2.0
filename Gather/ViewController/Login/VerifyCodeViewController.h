//
//  VerifyCodeViewController.h
//  Gather
//
//  Created by Ray on 14-12-25.
//  Copyright (c) 2014年 zero2all. All rights reserved.
//

#import "BaseLoginViewController.h"

@interface VerifyCodeViewController : BaseLoginViewController

@property (nonatomic ,copy) NSString *phoneNumber;
@property (nonatomic ,assign) VerifyCodeType pageType;

@end