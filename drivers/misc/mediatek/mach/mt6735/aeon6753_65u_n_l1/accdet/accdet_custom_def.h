// Headset mode MIC define
typedef enum
{
	ACCDET_MIC_MODE_ACC = 1,
	ACCDET_MIC_MODE_LOW_COST_WITHOUT_IN_BIAS = 2,
	ACCDET_MIC_MODE_LOW_COST_WITH_IN_BIAS = 6,
} ACCDET_MIC_MODE;
//#define ACCDET_MIC_MODE	(6)

// use accdet + EINT solution
#define ACCDET_EINT
//#ifndef ACCDET_EINT
//#define ACCDET_EINT_IRQ  //DCC mode
//#endif
//#define ACCDET_PIN_SWAP
//#define ACCDET_PIN_RECOGNIZATION

#define ACCDET_MIC_MODE (1)


#define ACCDET_HIGH_VOL_MODE
#ifdef ACCDET_HIGH_VOL_MODE
#define ACCDET_MIC_VOL 7     //2.5v
#else
#define ACCDET_MIC_VOL 2     //1.9v
#endif

#define ACCDET_SHORT_PLUGOUT_DEBOUNCE
#define ACCDET_SHORT_PLUGOUT_DEBOUNCE_CN 20
//#define FOUR_KEY_HEADSET


