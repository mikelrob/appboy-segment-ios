#if SWIFT_PACKAGE
#import "Segment.h"
#import "Appboy.h"
#else

#import <Foundation/Foundation.h>
#if __has_include(<Segment/SEGIntegrationFactory.h>)
#import <Segment/SEGIntegrationFactory.h>
#elif __has_include(<Analytics/SEGIntegrationFactory.h>)
#import <Analytics/SEGIntegrationFactory.h>
#endif

#endif

#import "SEGAppboyHelper.h"
#import "SEGAppboyIntegration.h"

@interface SEGAppboyIntegrationFactory : NSObject<SEGIntegrationFactory>

@property (readonly) SEGAppboyHelper *appboyHelper;
// Passed to Appboy as appboyOptions, available keys for configuration
// are documented in Appboy.h
@property NSDictionary *appboyOptions;

+ (instancetype)instance;

- (void)saveLaunchOptions:(NSDictionary *)launchOptions;
- (void)saveRemoteNotification:(NSDictionary *)userInfo;

@end
