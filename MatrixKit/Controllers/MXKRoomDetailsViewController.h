/*
 Copyright 2015 OpenMarket Ltd
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <MatrixSDK/MatrixSDK.h>

#import "MXKTableViewController.h"

/**
 This view controller displays the room details.
 */
@interface MXKRoomDetailsViewController : MXKTableViewController
{
@protected
    
    // the dedicated room
    MXRoom* mxRoom;
    
    // the room state
    MXRoomState* mxRoomState;
    
    // tell if the user can update the room info
    BOOL isSuperUser;
}

/**
 The dedicated roomId.
 */
@property (nonatomic, readonly) NSString *roomId;

/**
 The dedicated session
 */
@property (nonatomic, readonly) MXSession *session;


#pragma mark - Class methods

/**
 Returns the `UINib` object initialized for a `MXKRoomDetailsViewController`.
 
 @return The initialized `UINib` object or `nil` if there were errors during initialization
 or the nib file could not be located.
 
 @discussion You may override this method to provide a customized nib. If you do,
 you should also override `roomViewController` to return your
 view controller loaded from your custom nib.
 */
+ (UINib *)nib;

/**
 Creates and returns a new `MXKRoomDetailsViewController` object.
 
 @discussion This is the designated initializer for programmatic instantiation.
 @return An initialized `MXKRoomDetailsViewController` object if successful, `nil` otherwise.
 */
+ (instancetype)roomDetailsViewController;

/**
 Set the dedicated session and the room Id
 */
- (void) initWithSession:(MXSession*)session andRoomId:(NSString*)roomId;

@end