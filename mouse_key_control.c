#include <linux/input.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netdb.h>
# define port 9009
int temp;
int main(int argc, char **argv)
{

	char *keys = "``1234567890-=\b\tqwertyuiop[]``asdfghjkl;'```z";
	
	    int fd;
	    int n;

	        
		    fd = open("/dev/input/event3", O_RDONLY);
		        struct input_event ev;

			    while (1)
				        {
						    read(fd, &ev, sizeof(struct input_event));

						        if((ev.type == 1))
							{
								        printf("key %i state %i\n", ev.code, ev.value);
									if(ev.code==79)
										system("xdotool click 1");
									 else if(ev.code==80)
										 system("xdotool click 3");
									 switch(ev.code)
									 {
									
                                                                                 case 75:
											 system("xdotool click 4");
											 break;
									        case 76:
											 system("xdotool click 5");
											 break;
										 case 103:
											
											 system("xdotool mousemove_relative -- 0 -5");
											
											 
											break;
										 case 105:
										 system("xdotool mousemove_relative -- -5 0"); 
										 break;
										 case 106:
										 system("xdotool mousemove_relative 5 0");
									         break;
									        case 108:
										system("xdotool mousemove_relative 0 5");
									        break;	 
									 }

				
							printf("sent the keystroke \n");

							    }
																																																																																																																																																																																																																			 }

							}


