//
//  HelloWorldView.h
//  ShallowWater
//
//  Created by Steven Qiu on 13-11-23.
//  Copyright 2013年 __MyCompanyName__. All rights reserved.
//

#import "isgl3d.h"

@interface TemplateView : Isgl3dBasic3DView {

@private
	// The rendered text
	Isgl3dMeshNode * _3dText;

}
@end


#import "ShallowWaterAppDelegate.h"

@interface AppDelegate : ShallowWaterAppDelegate
{
    
}

-(void) createView;

@end