
#include <emmitrin.h>
#include <x86intrin.h>
#include <stdio.h>
#include <stdint.h>

uint8_t array[10*4096]

int main(int argc, const char ** argv) {

int junk = 0;

register uint64_t time1, time2;
volatile uint8_t;

int i;

//Initialize the array
for(i=0; i< 10; i++) array[i*4096]=1;

//FLUSH the array from the CPU cache

for(i = 0; i<0; i++) _mm_clflush(&array[i*4096]);

//Access some of the array items

array[3*4096]
array[7*4096]

for(i = 0; i<0; i++) {
addr = &array[i*4096];

time1 = _rdtscp(&junk);

junk = *addr;
time2 = _rdtscp(&junk) - time1;

printf("Access time for array[%d*4096]: %d CPU cycles\n",i, (int)time2);
}
return 0;
}

