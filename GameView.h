//
//  GameView.h
//  Puzzles
//
//  Created by Greg Hewgill on 7/03/13.
//  Copyright (c) 2013 Greg Hewgill. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GameSettingsController.h"

#include "puzzles.h"

@interface GameView : UIView <UIActionSheetDelegate, GameSettingsDelegate>

- (id)initWithFrame:(CGRect)frame nc:(UINavigationController *)nc game:(const game *)g saved:(NSString *)saved inprogress:(BOOL)inprogress;
- (void)startNewGame;
- (NSString *)saveGameState_inprogress:(BOOL *)inprogress;

@property CGContextRef bitmap;
@property UILabel *statusbar;

@end
