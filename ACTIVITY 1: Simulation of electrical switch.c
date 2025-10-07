#include <stdio.h>
int main() {int water_level;
printf("Input upper water
level.(0-100)");
scanf("%d" ,& water_level);
if(water_level<50){
printf("Turn ON the water pump.");
}
else{
printf("Turn OFF the water pump.");
}
return 0;
}
