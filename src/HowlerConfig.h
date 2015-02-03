// Configuration of the Howler Hardware v0.3
//
#include <asf.h>

//Version
#define VERSION_MAJOR		0
#define VERSION_MINOR		202 //100 = 0.1 

//JOYSTICK1 PIN CONFIGURATIONS
#define JOY1_U		  IOPORT_CREATE_PIN(PORTA, 5)
#define JOY1_D        IOPORT_CREATE_PIN(PORTA, 4)
#define JOY1_L		  IOPORT_CREATE_PIN(PORTA, 7)
#define JOY1_R		  IOPORT_CREATE_PIN(PORTA, 6)

//JOYSTICK1 ADC CONFIGURATIONS
#define JOY_ADC_MODULE		    ADCA
#define JOY1_U_ADC_INPUT			ADCCH_POS_PIN5
#define JOY1_U_ADC_SIGNAL_PIN       IOPORT_CREATE_PIN(PORTA, 5)

#define JOY1_D_ADC_INPUT			ADCCH_POS_PIN4
#define JOY1_D_ADC_SIGNAL_PIN       IOPORT_CREATE_PIN(PORTA, 4)

#define JOY1_L_ADC_INPUT			ADCCH_POS_PIN7
#define JOY1_L_ADC_SIGNAL_PIN       IOPORT_CREATE_PIN(PORTA, 7)

#define JOY1_R_ADC_INPUT			ADCCH_POS_PIN6
#define JOY1_R_ADC_SIGNAL_PIN       IOPORT_CREATE_PIN(PORTA, 6)

//JOYSTICK2 PIN CONFIGURATIONS
#define JOY2_U		  IOPORT_CREATE_PIN(PORTA, 2)
#define JOY2_D        IOPORT_CREATE_PIN(PORTA, 3)
#define JOY2_L		  IOPORT_CREATE_PIN(PORTA, 0)
#define JOY2_R		  IOPORT_CREATE_PIN(PORTA, 1)

//JOYSTICK2 ADC CONFIGURATIONS
#define JOY2_U_ADC_INPUT			ADCCH_POS_PIN2
#define JOY2_U_ADC_SIGNAL_PIN       IOPORT_CREATE_PIN(PORTA, 2)

#define JOY2_D_ADC_INPUT			ADCCH_POS_PIN3
#define JOY2_D_ADC_SIGNAL_PIN       IOPORT_CREATE_PIN(PORTA, 3)

#define JOY2_L_ADC_INPUT			ADCCH_POS_PIN0
#define JOY2_L_ADC_SIGNAL_PIN       IOPORT_CREATE_PIN(PORTA, 0)

#define JOY2_R_ADC_INPUT			ADCCH_POS_PIN1
#define JOY2_R_ADC_SIGNAL_PIN       IOPORT_CREATE_PIN(PORTA, 1)

//JOYSTICK3 PIN CONFIGURATIONS
#define JOY3_U		  IOPORT_CREATE_PIN(PORTD, 2)
#define JOY3_D        IOPORT_CREATE_PIN(PORTD, 3)
#define JOY3_L		  IOPORT_CREATE_PIN(PORTD, 0)
#define JOY3_R		  IOPORT_CREATE_PIN(PORTD, 1)

//JOYSTICK4 PIN CONFIGURATIONS
#define JOY4_U		  IOPORT_CREATE_PIN(PORTE, 0)
#define JOY4_D        IOPORT_CREATE_PIN(PORTE, 1)
#define JOY4_L		  IOPORT_CREATE_PIN(PORTD, 4)
#define JOY4_R		  IOPORT_CREATE_PIN(PORTD, 5)

//BUTTON PIN CONFIGURATIONS
#define BUTT1		  IOPORT_CREATE_PIN(PORTB, 0)
#define BUTT2		  IOPORT_CREATE_PIN(PORTB, 1)
#define BUTT3		  IOPORT_CREATE_PIN(PORTB, 3)
#define BUTT4		  IOPORT_CREATE_PIN(PORTB, 4)
#define BUTT5		  IOPORT_CREATE_PIN(PORTB, 5)
#define BUTT6		  IOPORT_CREATE_PIN(PORTB, 6)
#define BUTT7		  IOPORT_CREATE_PIN(PORTB, 7)
#define BUTT8		  IOPORT_CREATE_PIN(PORTC, 2)
#define BUTT9		  IOPORT_CREATE_PIN(PORTC, 3)
#define BUTT10		  IOPORT_CREATE_PIN(PORTC, 4)
#define BUTT11		  IOPORT_CREATE_PIN(PORTC, 5)
#define BUTT12		  IOPORT_CREATE_PIN(PORTC, 6)
#define BUTT13		  IOPORT_CREATE_PIN(PORTC, 7)
#define BUTT14		  IOPORT_CREATE_PIN(PORTF, 7)
#define BUTT15		  IOPORT_CREATE_PIN(PORTF, 6)
#define BUTT16		  IOPORT_CREATE_PIN(PORTF, 5)
#define BUTT17		  IOPORT_CREATE_PIN(PORTF, 4)
#define BUTT18		  IOPORT_CREATE_PIN(PORTF, 3)
#define BUTT19		  IOPORT_CREATE_PIN(PORTF, 2)
#define BUTT20		  IOPORT_CREATE_PIN(PORTF, 1)
#define BUTT21		  IOPORT_CREATE_PIN(PORTF, 0)
#define BUTT22		  IOPORT_CREATE_PIN(PORTE, 7)
#define BUTT23		  IOPORT_CREATE_PIN(PORTE, 6)
#define BUTT24		  IOPORT_CREATE_PIN(PORTE, 4)
#define BUTT25		  IOPORT_CREATE_PIN(PORTE, 3)
#define BUTT26		  IOPORT_CREATE_PIN(PORTE, 2)

//LED PIN CONFIGURATIONS
#define LED_USBINIT		  IOPORT_CREATE_PIN(PORTR, 0)
#define LED_COP			  IOPORT_CREATE_PIN(PORTR, 1)

//TWI PIN CONFIGURATIONS
#define TWI_SDA           IOPORT_CREATE_PIN(PORTC, 0)
#define TWI_SCL           IOPORT_CREATE_PIN(PORTC, 1)
#define TWI_NOE           IOPORT_CREATE_PIN(PORTB, 2)

//Various size definitions
#define NUM_RGB_LEDS				32
#define NUM_LEDS					96
#define NUM_INPUTS					45 // including accelerometer axis
#define NUM_JOYSTICK_BUTTONS		32
#define NUM_MOUSE_BUTTONS			3
#define NUM_INPUT_TYPES				0x27
#define COP_TIMEOUT					250


//definitions for Howler Protocol
#define HOWLER_ID					0xCE
#define CMD_SET_RGB_LED				0x01
#define CMD_SET_INDIVIDUAL_LED		0x02
#define CMD_SET_INPUT				0x03
#define CMD_GET_INPUT				0x04
#define CMD_SET_DEFAULT				0x05
#define CMD_SET_GLOBAL_BRIGHTNESS	0x06
#define CMD_SET_RGB_LED_DEFAULT		0x07
#define CMD_GET_RGB_LED				0x08
#define CMD_SET_RGB_LED_BANK		0x09

#define CMD_GET_FW_REV				0xA0
#define CMD_SET_DEVICE_ID			0xB0
#define CMD_GET_QEC					0xDD
#define CMD_GET_ACCEL_DATA			0XAC
#define CMD_GET_ADCS				0xAD
#define CMD_GET_RGB_LED				0x08

//Input Type Definitions
#define IT_NOTHING				0x00
#define IT_JOY1_BUTTON			0x01
#define IT_JOY2_BUTTON			0x02
#define IT_KEYBOARD				0x03
#define IT_MOUSE_BUTTON			0x04
#define IT_MOUSE_XAXIS			0x05
#define IT_MOUSE_YAXIS			0x06
#define IT_MOUSE_ZAXIS			0x07


#define IT_JOY1_DIG_OFFSET		0x10
#define IT_JOY1_DIG_THROTTLE	0x10
#define IT_JOY1_DIG_XAXIS		0x11
#define IT_JOY1_DIG_YAXIS		0x12
#define IT_JOY1_DIG_ZAXIS		0x13
#define IT_JOY1_DIG_XROT		0x14
#define IT_JOY1_DIG_YROT		0x15
#define IT_JOY1_DIG_ZROT		0x16
#define IT_JOY1_DIG_SLIDER		0x17

#define IT_JOY1_ANA_OFFSET		0x20
#define IT_JOY1_ANA_THROTTLE	0x20
#define IT_JOY1_ANA_XAXIS		0x21
#define IT_JOY1_ANA_YAXIS		0x22
#define IT_JOY1_ANA_ZAXIS		0x23
#define IT_JOY1_ANA_XROT		0x24
#define IT_JOY1_ANA_YROT		0x25
#define IT_JOY1_ANA_ZROT		0x26
#define IT_JOY1_ANA_SLIDER		0x27

#define IT_JOY2_DIG_OFFSET		0x40
#define IT_JOY2_DIG_THROTTLE	0x40
#define IT_JOY2_DIG_XAXIS		0x41
#define IT_JOY2_DIG_YAXIS		0x42
#define IT_JOY2_DIG_ZAXIS		0x43
#define IT_JOY2_DIG_XROT		0x44
#define IT_JOY2_DIG_YROT		0x45
#define IT_JOY2_DIG_ZROT		0x46
#define IT_JOY2_DIG_SLIDER		0x47

#define IT_JOY2_ANA_OFFSET		0x80
#define IT_JOY2_ANA_THROTTLE	0x80
#define IT_JOY2_ANA_XAXIS		0x81
#define IT_JOY2_ANA_YAXIS		0x82
#define IT_JOY2_ANA_ZAXIS		0x83
#define IT_JOY2_ANA_XROT		0x84
#define IT_JOY2_ANA_YROT		0x85
#define IT_JOY2_ANA_ZROT		0x86
#define IT_JOY2_ANA_SLIDER		0x87

//Default Input Types
#define JOY1_U_TYPE_DEFAULT			IT_JOY1_DIG_YAXIS
#define JOY1_D_TYPE_DEFAULT			IT_JOY1_DIG_YAXIS
#define JOY1_L_TYPE_DEFAULT			IT_JOY1_DIG_XAXIS
#define JOY1_R_TYPE_DEFAULT			IT_JOY1_DIG_XAXIS
#define JOY2_U_TYPE_DEFAULT			IT_JOY2_DIG_YAXIS
#define JOY2_D_TYPE_DEFAULT			IT_JOY2_DIG_YAXIS
#define JOY2_L_TYPE_DEFAULT			IT_JOY2_DIG_XAXIS
#define JOY2_R_TYPE_DEFAULT			IT_JOY2_DIG_XAXIS
#define JOY3_U_TYPE_DEFAULT			IT_JOY1_DIG_ZAXIS
#define JOY3_D_TYPE_DEFAULT			IT_JOY1_DIG_ZAXIS
#define JOY3_L_TYPE_DEFAULT			IT_JOY1_DIG_THROTTLE
#define JOY3_R_TYPE_DEFAULT			IT_JOY1_DIG_THROTTLE
#define JOY4_U_TYPE_DEFAULT			IT_JOY2_DIG_ZAXIS
#define JOY4_D_TYPE_DEFAULT			IT_JOY2_DIG_ZAXIS
#define JOY4_L_TYPE_DEFAULT			IT_JOY2_DIG_THROTTLE
#define JOY4_R_TYPE_DEFAULT			IT_JOY2_DIG_THROTTLE

#define BUTT1_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT2_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT3_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT4_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT5_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT6_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT7_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT8_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT9_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT10_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT11_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT12_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT13_TYPE_DEFAULT			IT_JOY1_BUTTON
#define BUTT14_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT15_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT16_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT17_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT18_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT19_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT20_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT21_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT22_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT23_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT24_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT25_TYPE_DEFAULT			IT_JOY2_BUTTON
#define BUTT26_TYPE_DEFAULT			IT_JOY2_BUTTON

#define ACCEL_XAXIS_TYPE_DEFAULT	IT_JOY1_ANA_XROT
#define ACCEL_YAXIS_TYPE_DEFAULT	IT_JOY1_ANA_YROT
#define ACCEL_ZAXIS_TYPE_DEFAULT	IT_JOY1_ANA_ZROT	

//Default Input Values
#define JOY1_U_VALUE_DEFAULT			-127	//Digital Joystick Axis
#define JOY1_D_VALUE_DEFAULT			127  	//Digital Joystick Axis
#define JOY1_L_VALUE_DEFAULT			-127	//Digital Joystick Axis
#define JOY1_R_VALUE_DEFAULT			127 	//Digital Joystick Axis
#define JOY2_U_VALUE_DEFAULT			-127	//Digital Joystick Axis
#define JOY2_D_VALUE_DEFAULT			127 	//Digital Joystick Axis
#define JOY2_L_VALUE_DEFAULT			-127	//Digital Joystick Axis
#define JOY2_R_VALUE_DEFAULT			127 	//Digital Joystick Axis
#define JOY3_U_VALUE_DEFAULT			-127	//Digital Joystick Axis
#define JOY3_D_VALUE_DEFAULT			127 	//Digital Joystick Axis
#define JOY3_L_VALUE_DEFAULT			-127	//Digital Joystick Axis
#define JOY3_R_VALUE_DEFAULT			127 	//Digital Joystick Axis
#define JOY4_U_VALUE_DEFAULT			-127	//Digital Joystick Axis
#define JOY4_D_VALUE_DEFAULT			127 	//Digital Joystick Axis
#define JOY4_L_VALUE_DEFAULT			-127	//Digital Joystick Axis
#define JOY4_R_VALUE_DEFAULT			127 	//Digital Joystick Axis

#define BUTT1_VALUE_DEFAULT				0x01	//Joystick Button 1
#define BUTT2_VALUE_DEFAULT				0x02	//Joystick Button 2
#define BUTT3_VALUE_DEFAULT				0x03	//Joystick Button 3
#define BUTT4_VALUE_DEFAULT				0x04	//Joystick Button 4
#define BUTT5_VALUE_DEFAULT				0x05	//Joystick Button 5
#define BUTT6_VALUE_DEFAULT				0x06	//Joystick Button 6
#define BUTT7_VALUE_DEFAULT				0x07	//Joystick Button 7
#define BUTT8_VALUE_DEFAULT				0x08	//Joystick Button 8
#define BUTT9_VALUE_DEFAULT				0x09	//Joystick Button 9
#define BUTT10_VALUE_DEFAULT			0x0A	//Joystick Button 10
#define BUTT11_VALUE_DEFAULT			0x0B	//Joystick Button 11
#define BUTT12_VALUE_DEFAULT			0x0C	//Joystick Button 12
#define BUTT13_VALUE_DEFAULT			0x0D	//Joystick Button 13
#define BUTT14_VALUE_DEFAULT			0x01	//Joystick Button 1
#define BUTT15_VALUE_DEFAULT			0x02	//Joystick Button 2
#define BUTT16_VALUE_DEFAULT			0x03	//Joystick Button 3
#define BUTT17_VALUE_DEFAULT			0x04	//Joystick Button 4
#define BUTT18_VALUE_DEFAULT			0x05	//Joystick Button 5
#define BUTT19_VALUE_DEFAULT			0x06	//Joystick Button 6
#define BUTT20_VALUE_DEFAULT			0x07	//Joystick Button 7
#define BUTT21_VALUE_DEFAULT			0x08	//Joystick Button 8
#define BUTT22_VALUE_DEFAULT			0x09	//Joystick Button 9
#define BUTT23_VALUE_DEFAULT			0x0A	//Joystick Button 10
#define BUTT24_VALUE_DEFAULT			0x0B	//Joystick Button 11
#define BUTT25_VALUE_DEFAULT			0x0C	//Joystick Button 12
#define BUTT26_VALUE_DEFAULT			0x0D	//Joystick Button 13

#define ACCEL_XAXIS_VALUE_DEFAULT		0
#define ACCEL_YAXIS_VALUE_DEFAULT		0
#define ACCEL_ZAXIS_VALUE_DEFAULT		0

#define JOY1_U_VALUE2_DEFAULT			0
#define JOY1_D_VALUE2_DEFAULT			0
#define JOY1_L_VALUE2_DEFAULT			0
#define JOY1_R_VALUE2_DEFAULT			0
#define JOY2_U_VALUE2_DEFAULT			0
#define JOY2_D_VALUE2_DEFAULT			0
#define JOY2_L_VALUE2_DEFAULT			0
#define JOY2_R_VALUE2_DEFAULT			0
#define JOY3_U_VALUE2_DEFAULT			0
#define JOY3_D_VALUE2_DEFAULT			0
#define JOY3_L_VALUE2_DEFAULT			0
#define JOY3_R_VALUE2_DEFAULT			0
#define JOY4_U_VALUE2_DEFAULT			0
#define JOY4_D_VALUE2_DEFAULT			0
#define JOY4_L_VALUE2_DEFAULT			0
#define JOY4_R_VALUE2_DEFAULT			0

#define BUTT1_VALUE2_DEFAULT			0
#define BUTT2_VALUE2_DEFAULT			0	
#define BUTT3_VALUE2_DEFAULT			0	
#define BUTT4_VALUE2_DEFAULT			0
#define BUTT5_VALUE2_DEFAULT			0	
#define BUTT6_VALUE2_DEFAULT			0	
#define BUTT7_VALUE2_DEFAULT			0	
#define BUTT8_VALUE2_DEFAULT			0	
#define BUTT9_VALUE2_DEFAULT			0	
#define BUTT10_VALUE2_DEFAULT			0	
#define BUTT11_VALUE2_DEFAULT			0	
#define BUTT12_VALUE2_DEFAULT			0	
#define BUTT13_VALUE2_DEFAULT			0	
#define BUTT14_VALUE2_DEFAULT			0	
#define BUTT15_VALUE2_DEFAULT			0	
#define BUTT16_VALUE2_DEFAULT			0	
#define BUTT17_VALUE2_DEFAULT			0	
#define BUTT18_VALUE2_DEFAULT			0	
#define BUTT19_VALUE2_DEFAULT			0	
#define BUTT20_VALUE2_DEFAULT			0	
#define BUTT21_VALUE2_DEFAULT			0	
#define BUTT22_VALUE2_DEFAULT			0	
#define BUTT23_VALUE2_DEFAULT			0	
#define BUTT24_VALUE2_DEFAULT			0	
#define BUTT25_VALUE2_DEFAULT			0	
#define BUTT26_VALUE2_DEFAULT			0

#define ACCEL_XAXIS_VALUE2_DEFAULT		0
#define ACCEL_YAXIS_VALUE2_DEFAULT		0	
#define ACCEL_ZAXIS_VALUE2_DEFAULT		0	

#define ACCEL_XAXIS_MIN_TRIG_DEFAULT	100
#define ACCEL_XAXIS_MAX_TRIG_DEFAULT	125
#define ACCEL_YAXIS_MIN_TRIG_DEFAULT	100
#define ACCEL_YAXIS_MAX_TRIG_DEFAULT	125
#define ACCEL_ZAXIS_MIN_TRIG_DEFAULT	100
#define ACCEL_ZAXIS_MAX_TRIG_DEFAULT	125

//Default LED Values
#define JOY1_LEDR_DEFAULT				0xFE
#define JOY1_LEDG_DEFAULT				0x00
#define JOY1_LEDB_DEFAULT				0x00
#define JOY2_LEDR_DEFAULT				0x00
#define JOY2_LEDG_DEFAULT				0xFE
#define JOY2_LEDB_DEFAULT				0x00
#define JOY3_LEDR_DEFAULT				0x00
#define JOY3_LEDG_DEFAULT				0x00
#define JOY3_LEDB_DEFAULT				0xFE
#define JOY4_LEDR_DEFAULT				0xFE
#define JOY4_LEDG_DEFAULT				0xFE
#define JOY4_LEDB_DEFAULT				0xFE
#define BUTT1_LEDR_DEFAULT				0xFE
#define BUTT1_LEDG_DEFAULT				0x00
#define BUTT1_LEDB_DEFAULT				0x00
#define BUTT2_LEDR_DEFAULT				0x00
#define BUTT2_LEDG_DEFAULT				0xFE
#define BUTT2_LEDB_DEFAULT				0x00
#define BUTT3_LEDR_DEFAULT				0x00
#define BUTT3_LEDG_DEFAULT				0x00
#define BUTT3_LEDB_DEFAULT				0xFE
#define BUTT4_LEDR_DEFAULT				0xFE
#define BUTT4_LEDG_DEFAULT				0xFE
#define BUTT4_LEDB_DEFAULT				0xFE
#define BUTT5_LEDR_DEFAULT				0xFE
#define BUTT5_LEDG_DEFAULT				0x00
#define BUTT5_LEDB_DEFAULT				0x00
#define BUTT6_LEDR_DEFAULT				0x00
#define BUTT6_LEDG_DEFAULT				0xFE
#define BUTT6_LEDB_DEFAULT				0x00
#define BUTT7_LEDR_DEFAULT				0x00
#define BUTT7_LEDG_DEFAULT				0x00
#define BUTT7_LEDB_DEFAULT				0xFE
#define BUTT8_LEDR_DEFAULT				0xFE
#define BUTT8_LEDG_DEFAULT				0xFE
#define BUTT8_LEDB_DEFAULT				0xFE
#define BUTT9_LEDR_DEFAULT				0xFE
#define BUTT9_LEDG_DEFAULT				0x00
#define BUTT9_LEDB_DEFAULT				0x00
#define BUTT10_LEDR_DEFAULT				0x00
#define BUTT10_LEDG_DEFAULT				0xFE
#define BUTT10_LEDB_DEFAULT				0x00
#define BUTT11_LEDR_DEFAULT				0x00
#define BUTT11_LEDG_DEFAULT				0x00
#define BUTT11_LEDB_DEFAULT				0xFE
#define BUTT12_LEDR_DEFAULT				0xFE
#define BUTT12_LEDG_DEFAULT				0xFE
#define BUTT12_LEDB_DEFAULT				0xFE
#define BUTT13_LEDR_DEFAULT				0xFE
#define BUTT13_LEDG_DEFAULT				0x00
#define BUTT13_LEDB_DEFAULT				0x00
#define BUTT14_LEDR_DEFAULT				0xFE
#define BUTT14_LEDG_DEFAULT				0x00
#define BUTT14_LEDB_DEFAULT				0x00
#define BUTT15_LEDR_DEFAULT				0x00
#define BUTT15_LEDG_DEFAULT				0xFE
#define BUTT15_LEDB_DEFAULT				0x00
#define BUTT16_LEDR_DEFAULT				0x00
#define BUTT16_LEDG_DEFAULT				0x00
#define BUTT16_LEDB_DEFAULT				0xFE
#define BUTT17_LEDR_DEFAULT				0xFE
#define BUTT17_LEDG_DEFAULT				0xFE
#define BUTT17_LEDB_DEFAULT				0xFE
#define BUTT18_LEDR_DEFAULT				0xFE
#define BUTT18_LEDG_DEFAULT				0x00
#define BUTT18_LEDB_DEFAULT				0x00
#define BUTT19_LEDR_DEFAULT				0x00
#define BUTT19_LEDG_DEFAULT				0xFE
#define BUTT19_LEDB_DEFAULT				0x00
#define BUTT20_LEDR_DEFAULT				0x00
#define BUTT20_LEDG_DEFAULT				0x00
#define BUTT20_LEDB_DEFAULT				0xFE
#define BUTT21_LEDR_DEFAULT				0xFE
#define BUTT21_LEDG_DEFAULT				0xFE
#define BUTT21_LEDB_DEFAULT				0xFE
#define BUTT22_LEDR_DEFAULT				0xFE
#define BUTT22_LEDG_DEFAULT				0x00
#define BUTT22_LEDB_DEFAULT				0x00
#define BUTT23_LEDR_DEFAULT				0x00
#define BUTT23_LEDG_DEFAULT				0xFE
#define BUTT23_LEDB_DEFAULT				0x00
#define BUTT24_LEDR_DEFAULT				0x00
#define BUTT24_LEDG_DEFAULT				0x00
#define BUTT24_LEDB_DEFAULT				0xFE
#define BUTT25_LEDR_DEFAULT				0xFE
#define BUTT25_LEDG_DEFAULT				0xFE
#define BUTT25_LEDB_DEFAULT				0xFE
#define BUTT26_LEDR_DEFAULT				0xFE
#define BUTT26_LEDG_DEFAULT				0x00
#define BUTT26_LEDB_DEFAULT				0x00
#define HP1_LEDR_DEFAULT				0x00
#define HP1_LEDG_DEFAULT				0xFE
#define HP1_LEDB_DEFAULT				0x00
#define HP2_LEDR_DEFAULT				0x00
#define HP2_LEDG_DEFAULT				0xFE
#define HP2_LEDB_DEFAULT				0x00


//Lookup Index Definitions
#define JOY1_U_LKUP_INDEX				0
#define JOY1_D_LKUP_INDEX				1
#define JOY1_L_LKUP_INDEX				2
#define JOY1_R_LKUP_INDEX				3
#define JOY2_U_LKUP_INDEX				4
#define JOY2_D_LKUP_INDEX				5
#define JOY2_L_LKUP_INDEX				6
#define JOY2_R_LKUP_INDEX				7
#define JOY3_U_LKUP_INDEX				8
#define JOY3_D_LKUP_INDEX				9
#define JOY3_L_LKUP_INDEX				10
#define JOY3_R_LKUP_INDEX				11
#define JOY4_U_LKUP_INDEX				12
#define JOY4_D_LKUP_INDEX				13
#define JOY4_L_LKUP_INDEX				14
#define JOY4_R_LKUP_INDEX				15
#define BUTT1_LKUP_INDEX				16
#define BUTT2_LKUP_INDEX				17
#define BUTT3_LKUP_INDEX				18
#define BUTT4_LKUP_INDEX				19
#define BUTT5_LKUP_INDEX				20
#define BUTT6_LKUP_INDEX				21
#define BUTT7_LKUP_INDEX				22
#define BUTT8_LKUP_INDEX				23
#define BUTT9_LKUP_INDEX				24
#define BUTT10_LKUP_INDEX				25
#define BUTT11_LKUP_INDEX				26
#define BUTT12_LKUP_INDEX				27
#define BUTT13_LKUP_INDEX				28
#define BUTT14_LKUP_INDEX				29
#define BUTT15_LKUP_INDEX				30
#define BUTT16_LKUP_INDEX				31
#define BUTT17_LKUP_INDEX				32
#define BUTT18_LKUP_INDEX				33
#define BUTT19_LKUP_INDEX				34
#define BUTT20_LKUP_INDEX				35
#define BUTT21_LKUP_INDEX				36
#define BUTT22_LKUP_INDEX				37
#define BUTT23_LKUP_INDEX				38
#define BUTT24_LKUP_INDEX				39
#define BUTT25_LKUP_INDEX				40
#define BUTT26_LKUP_INDEX				41
#define ACCEL_XAXIS_LKUP_INDEX			42
#define ACCEL_YAXIS_LKUP_INDEX			43
#define ACCEL_ZAXIS_LKUP_INDEX			44



//EEPROM MEMORY LOCATIONS
#define JOY1_U_VALUE_ADDR			0x0000
#define	JOY1_D_VALUE_ADDR			0x0001
#define	JOY1_L_VALUE_ADDR			0x0002
#define	JOY1_R_VALUE_ADDR			0x0003
#define JOY2_U_VALUE_ADDR			0x0004
#define	JOY2_D_VALUE_ADDR			0x0005
#define	JOY2_L_VALUE_ADDR			0x0006
#define	JOY2_R_VALUE_ADDR			0x0007
#define JOY3_U_VALUE_ADDR			0x0008
#define	JOY3_D_VALUE_ADDR			0x0009
#define	JOY3_L_VALUE_ADDR			0x000A
#define	JOY3_R_VALUE_ADDR			0x000B
#define JOY4_U_VALUE_ADDR			0x000C
#define	JOY4_D_VALUE_ADDR			0x000D
#define	JOY4_L_VALUE_ADDR			0x000E
#define	JOY4_R_VALUE_ADDR			0x000F
#define BUTT1_VALUE_ADDR			0x0010
#define BUTT2_VALUE_ADDR			0x0011
#define BUTT3_VALUE_ADDR			0x0012
#define BUTT4_VALUE_ADDR			0x0013
#define BUTT5_VALUE_ADDR			0x0014
#define BUTT6_VALUE_ADDR			0x0015
#define BUTT7_VALUE_ADDR			0x0016
#define BUTT8_VALUE_ADDR			0x0017
#define BUTT9_VALUE_ADDR			0x0018
#define BUTT10_VALUE_ADDR			0x0019
#define BUTT11_VALUE_ADDR			0x001A
#define BUTT12_VALUE_ADDR			0x001B
#define BUTT13_VALUE_ADDR			0x001C
#define BUTT14_VALUE_ADDR			0x001D
#define BUTT15_VALUE_ADDR			0x001E
#define BUTT16_VALUE_ADDR			0x001F
#define BUTT17_VALUE_ADDR			0x0020
#define BUTT18_VALUE_ADDR			0x0021
#define BUTT19_VALUE_ADDR			0x0022
#define BUTT20_VALUE_ADDR			0x0023
#define BUTT21_VALUE_ADDR			0x0024
#define BUTT22_VALUE_ADDR			0x0025
#define BUTT23_VALUE_ADDR			0x0026
#define BUTT24_VALUE_ADDR			0x0027
#define BUTT25_VALUE_ADDR			0x0028
#define BUTT26_VALUE_ADDR			0x0029

#define JOY1_U_TYPE_ADDR			0x002A
#define	JOY1_D_TYPE_ADDR			0x002B
#define	JOY1_L_TYPE_ADDR			0x002C
#define	JOY1_R_TYPE_ADDR			0x002D
#define JOY2_U_TYPE_ADDR			0x002E
#define	JOY2_D_TYPE_ADDR			0x002F
#define	JOY2_L_TYPE_ADDR			0x0030
#define	JOY2_R_TYPE_ADDR			0x0031
#define JOY3_U_TYPE_ADDR			0x0032
#define	JOY3_D_TYPE_ADDR			0x0033
#define	JOY3_L_TYPE_ADDR			0x0034
#define	JOY3_R_TYPE_ADDR			0x0035
#define JOY4_U_TYPE_ADDR			0x0036
#define	JOY4_D_TYPE_ADDR			0x0037
#define	JOY4_L_TYPE_ADDR			0x0038
#define	JOY4_R_TYPE_ADDR			0x0039
#define BUTT1_TYPE_ADDR				0x003A
#define BUTT2_TYPE_ADDR				0x003B
#define BUTT3_TYPE_ADDR				0x003C
#define BUTT4_TYPE_ADDR				0x003D
#define BUTT5_TYPE_ADDR				0x003E
#define BUTT6_TYPE_ADDR				0x003F
#define BUTT7_TYPE_ADDR				0x0040
#define BUTT8_TYPE_ADDR				0x0041
#define BUTT9_TYPE_ADDR				0x0042
#define BUTT10_TYPE_ADDR			0x0043
#define BUTT11_TYPE_ADDR			0x0044
#define BUTT12_TYPE_ADDR			0x0045
#define BUTT13_TYPE_ADDR			0x0046
#define BUTT14_TYPE_ADDR			0x0047
#define BUTT15_TYPE_ADDR			0x0048
#define BUTT16_TYPE_ADDR			0x0049
#define BUTT17_TYPE_ADDR			0x004A
#define BUTT18_TYPE_ADDR			0x004B
#define BUTT19_TYPE_ADDR			0x004C
#define BUTT20_TYPE_ADDR			0x004D
#define BUTT21_TYPE_ADDR			0x004E
#define BUTT22_TYPE_ADDR			0x004F
#define BUTT23_TYPE_ADDR			0x0050
#define BUTT24_TYPE_ADDR			0x0051
#define BUTT25_TYPE_ADDR			0x0052
#define BUTT26_TYPE_ADDR			0x0053

#define JOY1_U_VALUE2_ADDR			0x0054
#define	JOY1_D_VALUE2_ADDR			0x0055
#define	JOY1_L_VALUE2_ADDR			0x0056
#define	JOY1_R_VALUE2_ADDR			0x0057
#define JOY2_U_VALUE2_ADDR			0x0058
#define	JOY2_D_VALUE2_ADDR			0x0059
#define	JOY2_L_VALUE2_ADDR			0x005A
#define	JOY2_R_VALUE2_ADDR			0x005B
#define JOY3_U_VALUE2_ADDR			0x005C
#define	JOY3_D_VALUE2_ADDR			0x005D
#define	JOY3_L_VALUE2_ADDR			0x005E
#define	JOY3_R_VALUE2_ADDR			0x005F
#define JOY4_U_VALUE2_ADDR			0x0060
#define	JOY4_D_VALUE2_ADDR			0x0061
#define	JOY4_L_VALUE2_ADDR			0x0062
#define	JOY4_R_VALUE2_ADDR			0x0063
#define BUTT1_VALUE2_ADDR			0x0064
#define BUTT2_VALUE2_ADDR			0x0065
#define BUTT3_VALUE2_ADDR			0x0066
#define BUTT4_VALUE2_ADDR			0x0067
#define BUTT5_VALUE2_ADDR			0x0068
#define BUTT6_VALUE2_ADDR			0x0069
#define BUTT7_VALUE2_ADDR			0x006A
#define BUTT8_VALUE2_ADDR			0x006B
#define BUTT9_VALUE2_ADDR			0x006C
#define BUTT10_VALUE2_ADDR			0x006D
#define BUTT11_VALUE2_ADDR			0x006E
#define BUTT12_VALUE2_ADDR			0x006F
#define BUTT13_VALUE2_ADDR			0x0070
#define BUTT14_VALUE2_ADDR			0x0071
#define BUTT15_VALUE2_ADDR			0x0072
#define BUTT16_VALUE2_ADDR			0x0073
#define BUTT17_VALUE2_ADDR			0x0074
#define BUTT18_VALUE2_ADDR			0x0075
#define BUTT19_VALUE2_ADDR			0x0076
#define BUTT20_VALUE2_ADDR			0x0077
#define BUTT21_VALUE2_ADDR			0x0078
#define BUTT22_VALUE2_ADDR			0x0079
#define BUTT23_VALUE2_ADDR			0x007A
#define BUTT24_VALUE2_ADDR			0x007B
#define BUTT25_VALUE2_ADDR			0x007C
#define BUTT26_VALUE2_ADDR			0x007D

#define ACCEL_XAXIS_TYPE_ADDR		0x007E
#define ACCEL_YAXIS_TYPE_ADDR		0x007F
#define ACCEL_ZAXIS_TYPE_ADDR		0x0080
#define ACCEL_XAXIS_VALUE_ADDR		0x0081
#define ACCEL_YAXIS_VALUE_ADDR		0x0082
#define ACCEL_ZAXIS_VALUE_ADDR		0x0083
#define ACCEL_XAXIS_VALUE2_ADDR		0x0084
#define ACCEL_YAXIS_VALUE2_ADDR		0x0085
#define ACCEL_ZAXIS_VALUE2_ADDR		0x0086

#define JOY1_LEDR_ADDR				0x0087
#define JOY1_LEDG_ADDR				0x0088
#define JOY1_LEDB_ADDR				0x0089
#define JOY2_LEDR_ADDR				0x008A
#define JOY2_LEDG_ADDR				0x008B
#define JOY2_LEDB_ADDR				0x008C
#define JOY3_LEDR_ADDR				0x008D
#define JOY3_LEDG_ADDR				0x008E
#define JOY3_LEDB_ADDR				0x008F
#define JOY4_LEDR_ADDR				0x0090
#define JOY4_LEDG_ADDR				0x0091
#define JOY4_LEDB_ADDR				0x0092

#define BUTT1_LEDR_ADDR				0x0093
#define BUTT1_LEDG_ADDR				0x0094
#define BUTT1_LEDB_ADDR				0x0095
#define BUTT2_LEDR_ADDR				0x0096
#define BUTT2_LEDG_ADDR				0x0097
#define BUTT2_LEDB_ADDR				0x0098
#define BUTT3_LEDR_ADDR				0x0099
#define BUTT3_LEDG_ADDR				0x009A
#define BUTT3_LEDB_ADDR				0x009B
#define BUTT4_LEDR_ADDR				0x009C
#define BUTT4_LEDG_ADDR				0x009D
#define BUTT4_LEDB_ADDR				0x009E

#define BUTT5_LEDR_ADDR				0x009F
#define BUTT5_LEDG_ADDR				0x00A0
#define BUTT5_LEDB_ADDR				0x00A1
#define BUTT6_LEDR_ADDR				0x00A2
#define BUTT6_LEDG_ADDR				0x00A3
#define BUTT6_LEDB_ADDR				0x00A4
#define BUTT7_LEDR_ADDR				0x00A5
#define BUTT7_LEDG_ADDR				0x00A6
#define BUTT7_LEDB_ADDR				0x00A7
#define BUTT8_LEDR_ADDR				0x00A8
#define BUTT8_LEDG_ADDR				0x00A9
#define BUTT8_LEDB_ADDR				0x00AA
#define BUTT9_LEDR_ADDR				0x00AB
#define BUTT9_LEDG_ADDR				0x00AC
#define BUTT9_LEDB_ADDR				0x00AD
#define BUTT10_LEDR_ADDR			0x00AE
#define BUTT10_LEDG_ADDR			0x00AF
#define BUTT10_LEDB_ADDR			0x00B0
#define BUTT11_LEDR_ADDR			0x00B1
#define BUTT11_LEDG_ADDR			0x00B2
#define BUTT11_LEDB_ADDR			0x00B3
#define BUTT12_LEDR_ADDR			0x00B4
#define BUTT12_LEDG_ADDR			0x00B5
#define BUTT12_LEDB_ADDR			0x00B6
#define BUTT13_LEDR_ADDR			0x00B7
#define BUTT13_LEDG_ADDR			0x00B8
#define BUTT13_LEDB_ADDR			0x00B9
#define BUTT14_LEDR_ADDR			0x00BA
#define BUTT14_LEDG_ADDR			0x00BB
#define BUTT14_LEDB_ADDR			0x00BC
#define BUTT15_LEDR_ADDR			0x00BD
#define BUTT15_LEDG_ADDR			0x00BE
#define BUTT15_LEDB_ADDR			0x00BF
#define BUTT16_LEDR_ADDR			0x00C0
#define BUTT16_LEDG_ADDR			0x00C1
#define BUTT16_LEDB_ADDR			0x00C2
#define BUTT17_LEDR_ADDR			0x00C3
#define BUTT17_LEDG_ADDR			0x00C4
#define BUTT17_LEDB_ADDR			0x00C5
#define BUTT18_LEDR_ADDR			0x00C6
#define BUTT18_LEDG_ADDR			0x00C7
#define BUTT18_LEDB_ADDR			0x00C8
#define BUTT19_LEDR_ADDR			0x00C9
#define BUTT19_LEDG_ADDR			0x00CA
#define BUTT19_LEDB_ADDR			0x00CB
#define BUTT20_LEDR_ADDR			0x00CC
#define BUTT20_LEDG_ADDR			0x00CD
#define BUTT20_LEDB_ADDR			0x00CE
#define BUTT21_LEDR_ADDR			0x00CF
#define BUTT21_LEDG_ADDR			0x00D0
#define BUTT21_LEDB_ADDR			0x00D1
#define BUTT22_LEDR_ADDR			0x00D2
#define BUTT22_LEDG_ADDR			0x00D3
#define BUTT22_LEDB_ADDR			0x00D4
#define BUTT23_LEDR_ADDR			0x00D5
#define BUTT23_LEDG_ADDR			0x00D6
#define BUTT23_LEDB_ADDR			0x00D7
#define BUTT24_LEDR_ADDR			0x00D8
#define BUTT24_LEDG_ADDR			0x00D9
#define BUTT24_LEDB_ADDR			0x00DA
#define BUTT25_LEDR_ADDR			0x00DB
#define BUTT25_LEDG_ADDR			0x00DC
#define BUTT25_LEDB_ADDR			0x00DD
#define BUTT26_LEDR_ADDR			0x00DE
#define BUTT26_LEDG_ADDR			0x00DF
#define BUTT26_LEDB_ADDR			0x00E0

#define HP1_LEDR_ADDR				0x00E1
#define HP1_LEDG_ADDR				0x00E2
#define HP1_LEDB_ADDR				0x00E3
#define HP2_LEDR_ADDR				0x00E4
#define HP2_LEDG_ADDR				0x00E5
#define HP2_LEDB_ADDR				0x00E6

#define ACCEL_XAXIS_MIN_TRIG_ADDR	0x00E7
#define ACCEL_YAXIS_MIN_TRIG_ADDR	0x00E8
#define ACCEL_ZAXIS_MIN_TRIG_ADDR	0x00E9
#define ACCEL_XAXIS_MAX_TRIG_ADDR	0x00EA
#define ACCEL_YAXIS_MAX_TRIG_ADDR	0x00EB
#define ACCEL_ZAXIS_MAX_TRIG_ADDR	0x00EC

//BUTTON BIT MASKS
#define JOY1_U_MASK		0x0000000000000001
#define JOY1_D_MASK		0x0000000000000002
#define JOY1_L_MASK		0x0000000000000004
#define JOY1_R_MASK		0x0000000000000008
#define JOY2_U_MASK		0x0000000000000010
#define JOY2_D_MASK		0x0000000000000020
#define JOY2_L_MASK		0x0000000000000040
#define JOY2_R_MASK		0x0000000000000080
#define JOY3_U_MASK		0x0000000000000100
#define JOY3_D_MASK		0x0000000000000200
#define JOY3_L_MASK		0x0000000000000400
#define JOY3_R_MASK		0x0000000000000800
#define JOY4_U_MASK		0x0000000000001000
#define JOY4_D_MASK		0x0000000000002000
#define JOY4_L_MASK		0x0000000000004000
#define JOY4_R_MASK		0x0000000000008000
#define BUTT1_MASK		0x0000000000010000
#define BUTT2_MASK		0x0000000000020000
#define BUTT3_MASK		0x0000000000040000
#define BUTT4_MASK		0x0000000000080000
#define BUTT5_MASK		0x0000000000100000
#define BUTT6_MASK		0x0000000000200000
#define BUTT7_MASK		0x0000000000400000
#define BUTT8_MASK		0x0000000000800000
#define BUTT9_MASK		0x0000000001000000
#define BUTT10_MASK		0x0000000002000000
#define BUTT11_MASK		0x0000000004000000
#define BUTT12_MASK		0x0000000008000000
#define BUTT13_MASK		0x0000000010000000
#define BUTT14_MASK		0x0000000020000000
#define BUTT15_MASK		0x0000000040000000
#define BUTT16_MASK		0x0000000080000000
#define BUTT17_MASK		0x0000000100000000
#define BUTT18_MASK		0x0000000200000000
#define BUTT19_MASK		0x0000000400000000
#define BUTT20_MASK		0x0000000800000000
#define BUTT21_MASK		0x0000001000000000
#define BUTT22_MASK		0x0000002000000000
#define BUTT23_MASK		0x0000004000000000
#define BUTT24_MASK		0x0000008000000000
#define BUTT25_MASK		0x0000010000000000
#define BUTT26_MASK			0x0000020000000000
#define ACCEL_XAXIS_MASK	0x0000040000000000
#define ACCEL_YAXIS_MASK	0x0000080000000000
#define ACCEL_ZAXIS_MASK	0x0000100000000000
