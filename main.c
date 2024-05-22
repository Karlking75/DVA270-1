#include <nrfx.h>
#include <nrf5340_application.h>
#include <nrfx_config.h>
#include <nrf.h>
#include <nrfx_bsdriver.h>
#include <assert.h>
#include <stdio.h>
#include <Daniel_GPIO.h> //Ni behöver alltså inte inkludera er egna UARTE write, förutsätt att det finns en uarte_write, uarte_init osv osv
#include "grupp1.h" //inkludera er header fil.
#include "nonblocking.h" //Grupp 5
/* By Daniel Morberg*/



int main(void)
{
int keypress = get_key();
  switch(keypress){
    case 1:

    case 5:
    //anrop till grupp 1's funktion
    breaK;
  //osv osv
  }
}
