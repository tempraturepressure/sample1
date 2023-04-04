
#define uint32 unsigned int;
volatile uint32 *RCC_CR = 0x40023800; // CLOCK ENABLE
volatile uint32 *RCC_AHB1ENR = (0x40023800+0x30);                                               
volatile uint32 *GPIOA_MODER = (0x40020000+0x00);
volatile uint32 *GPIOA_AFRH = (0x40020000+0x24);

volatile uint32 *RCC_CR = 0x40023800; // CLOCK ENABLE
volatile uint32 *RCC_AHB1ENR = (0x40023800+0x30);                                               
volatile uint32 *GPIOA_MODER = (0x40020000+0x00);
volatile uint32 *GPIOA_AFRH = (0x40020000+0x24);
volatile uint32 *RCC_CR = 0x40023800; // CLOCK ENABLE
volatile uint32 *RCC_AHB1ENR = (0x40023800+0x30);                                               
volatile uint32 *GPIOA_MODER = (0x40020000+0x00);
volatile uint32 *GPIOA_AFRH = (0x40020000+0x24);
volatile uint32 *RCC_CR = 0x40023800; // CLOCK ENABLE
volatile uint32 *RCC_AHB1ENR = (0x40023800+0x30);                                               
volatile uint32 *GPIOA_MODER = (0x40020000+0x00);
volatile uint32 *GPIOA_AFRH = (0x40020000+0x24);

volatile uint32 *RCC_CR = 0x40023800; // CLOCK ENABLE
volatile uint32 *RCC_AHB1ENR = (0x40023800+0x30);                                               
volatile uint32 *GPIOA_MODER = (0x40020000+0x00);
volatile uint32 *GPIOA_AFRH = (0x40020000+0x24);
volatile uint32 *USART_SR = 0x40004C00;
volatile uint32 *USART_CR1 = (0x40004C00+0x0C);
volatile uint32 *USART_BRR = (0x40004C00+0x08);                                 //uint32 *RCC_CFGR_PPRE1 = (0x40004C00+0x40);
volatile uint32 *USART_DR = (0x40004C00+0x04);                                 //uint32 *RCC_APB1LPENR = (0x40023800+0x40); //peripheral clock enable register
                                                                               //uint32 *GPIOx_BSRR = (0x40004C00+0x18);
                                                                               //unit32 *GPIOx_ODR = (0x40004C00+0x14);
                                                                               //uint32 *GPIOx_IDR = (0x40004C00 +0x10);
void clock_select();
void gpio_init();
void uart_init();                                                                      //void clock_lowpower();

int main()
{
	clock_select();
	gpio_init();
	uart_init();                                                                                     //clock_lowpower ();
	
}

void clock_select()
{
	*RCC_CR |= (1<<0); //CLOCK ENABLE
	                                                                                     //*RCC_APB1LPENR |= (1<<19); //peripheral clock enable register
	*RCC_AHB1ENR |=(1<<0);  // peripheral clock register enable
	                                                                                    //*RCC_CFGR_PPRE1 |= (1<<19); // RCC UART CLOCK ENABLE
}

                                                                                      //void clock_lowpower()
                                                                                          //{
	                                                                                          //
                                                                                               //}
void gpio_init()
{
	*GPIOA_MODER |= (10<<0);  //GPIOA ALTERNATION FUNCTION MODE
	*GPIOA_AFRH |= (8<<0);	// ALTERNATE FUNCTION HIGH REGISTER
	*GPIOA_AFRH |= (8<<4);
	
	                                                                             //*GPIOx_BSRR |= (1<<8);    //GPIO PORT BIT SET/RESET REGISTER
	                                                                             //*GPIOx_ODR |= (1<<8);     //GPIO PORT OUTPET DATA REGISTER
	                                                                             //*GPIOx_IDR |= (1<<8);     //GPIO PORT INPUT DATA REGISTER
	
	
	
}
 void uart_init()
 {
	 *USART_CR1 |=(1<<13);
	 *USART_BRR =9600;
	 *USART_CR1 = (1<<3);
	 *USART_DR = 30;
while(*USART_SR != (1<<6));
	 
 }
	 
