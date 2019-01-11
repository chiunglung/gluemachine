#define GLUEPATH_MAX 1025
#define GLUEGUN_MAX  64


typedef struct _gluepath_{
	int glueGun;
	int glueGunPipeDiameter;
	int glueGunSpeed;
	int pathType;
	int pointStart;
	int pointEnd;
	int pointCenter;
	int pathDirection;
}GluePath_t;

