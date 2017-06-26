//
//  TwoViewController.h
//  ReactiveCocoa
//
//  Created by 新龙科技 on 2017/6/26.
//  Copyright © 2017年 新龙科技. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ReactiveObjC.h"
@interface TwoViewController : UIViewController
@property (nonatomic, strong) RACSubject *delegateSignal;
@end
