#include <__cross_studio_io.h>
#include <salvo.h>
#include <msp430.h>
#define TASK1   OSTCBP(1)
void task1(void)
{
 for(;;)
  {
       P1DIR |= BIT1;
       P1OUT |= BIT1;
       OS_Yield();
  }
  
}

void main(void)
{
    OSInit();
    OSCreateTask(task1, TASK1, 1);

    for(;;)
       OSSched();
}
