#include <stdio.h>
int main(){
	int deviceType, symptomCode;
	printf("enter\n1: Laptop\n2: Smartphone\n3: Router\n");
	scanf("%d",&deviceType);
	fflush(stdin);
	if (deviceType ==1){
		printf("enter\n10: Won't turn on\n11: Overheating\n12: Slow performance\n");
		scanf("%d",&symptomCode);
		switch (symptomCode){
		case 10:
			printf("Check power adapter and battery connections. Try a different power outlet. Remove battery and hold power button for 30 seconds.");
			break;
		case 11: 
		    printf("Clean fans and ensure proper ventilation. Check for dust accumulation. Use a cooling pad. Monitor CPU usage.");
		    break;
		case 12:
			printf("Run system diagnostics and check resource usage. Scan for malware. Upgrade RAM if necessary. Defragment hard drive.");
			break;
		default : 
		    printf("wrong symptom code entered");
	    }
	}
	else{ if(deviceType ==2){
		printf("enter\n20: Battery drains fast\n21: No signal\n22: Touchscreen unresponsive\n");
		scanf("%d",&symptomCode);
		switch (symptomCode){
		case 20:
			printf("Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features.");
			break;
		case 21: 
		    printf("Check SIM card and network settings. Toggle airplane mode. Update carrier settings. Check for network outages.");
		    break;
		case 22:
			printf("Perform screen calibration test. Clean screen surface. Restart device. Check for software updates.");
			break;
		default : 
		    printf("wrong symptom code entered");
	    }
	} else{ if(deviceType ==3){
		printf("enter\n30: No internet connection\n31: Wi-Fi signal weak\n32: Device can't connect\n");
		scanf("%d",&symptomCode);
		switch (symptomCode){
		case 30:
			printf("Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription.");
			break;
		case 31: 
		    printf("Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender.");
		    break;
		case 32:
			printf("Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts.");
			break;
		default : 
		    printf("wrong symptom code entered");
     	}
        }else {
        	printf("invalid device type entered");
        }
    }
}
return 0;
}
	
