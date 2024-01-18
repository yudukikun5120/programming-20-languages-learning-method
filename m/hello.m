#import <Foundation/NSObject.h>
#import <stdio.h>

@interface Greeting : NSObject
    - (void) say;
@end

@implementation Greeting
    - (void) say {
        printf("Hello!\n");
    }
@end

int main()
{
    id g = [Greeting alloc];
    [g say];
    return 0;
}
