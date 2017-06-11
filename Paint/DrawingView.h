//
//  DrawingView.m
//  FingerPaint
//
//  Created by Noor Alhoussari on 2017-06-10.
//  Copyright © 2017 Noor Alhoussari. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DrawingView : UIView

//- (void)stroke;

- (void)moveToPoint:(CGPoint)point;

- (void)connectPoint:(CGPoint)point;

@end
