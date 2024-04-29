#include <stdio.h>
#include <math.h>
main()
{
	float p1, q1, r1, p2, q2, r2, d;
	scanf("%f%f%f", &p1, &q1, &r1);
	scanf("%f%f%f", &p2, &q2, &r2);
	d = sqrt(pow(p1 - p2, 2) + pow(q1 - q2, 2));
	if (r1 + r2 < d)
		printf("nemaju dodirnih tacaka\n");
	else
		if (r1 + r2 == d)
			printf("dodiruju se\n");
		else
			if (fabsf(r1 - r2) < d) /* abs - int, fabs - double, fabsf - float*/
				printf("seku se\n");
			else
				printf("obuhvata\n");
	system("pause");
}
