#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct Hexagon
{
	float x1;
	float y1;
	float x2;
	float y2;
	float x3;
	float y3;
	float x4;
	float y4;
	float x5;
	float y5;
	float x6;
	float y6;
} Hexagon;
typedef struct Centar
{
	float cx;
	float cy;
} Centar;
int Iznad(Hexagon h)
{
	int brojTemenaIznadX = 0;
	if (h.y1 >= 0) brojTemenaIznadX++;
	if (h.y2 >= 0) brojTemenaIznadX++;
	if (h.y3 >= 0) brojTemenaIznadX++;
	if (h.y4 >= 0) brojTemenaIznadX++;
	if (h.y5 >= 0) brojTemenaIznadX++;
	if (h.y6 >= 0) brojTemenaIznadX++;
	if (brojTemenaIznadX > 3) return 1;
	else return 0;
}
float Povrsina(Hexagon h)
{
	float povKriske, povSestougla = 0.0, strana1, strana2, strana3, S;
	Centar c;
	c.cx = (h.x1 + h.x2 + h.x3 + h.x4 + h.x5 + h.x6) / 6;
	c.cy = (h.y1 + h.y2 + h.y3 + h.y4 + h.y5 + h.y6) / 6;
	/* povrsina trougla "kriske" 1 */
	strana1 = sqrt(pow(h.x2 - h.x1, 2) + pow(h.y2 - h.y1, 2)); /* od tacke 2 do tacke 1 */
	strana2 = sqrt(pow(h.x2 - c.cx, 2) + pow(h.y2 - c.cy, 2)); /* od tacke 2 do centra */
	strana3 = sqrt(pow(h.x1 - c.cx, 2) + pow(h.y1 - c.cy, 2)); /* od tacke 1 do centra */
	S = (strana1 + strana2 + strana3) / 2; /* poluobim "kriske" 1 */
	povKriske = sqrt(S * (S - strana1) * (S - strana2) * (S - strana3));
	povSestougla += povKriske;
	
		/* povrsina trougla "kriske" 2 */
		strana1 = sqrt(pow(h.x3 - h.x2, 2) + pow(h.y3 - h.y2, 2)); /* od tacke 3 do tacke 2 */
	strana2 = sqrt(pow(h.x3 - c.cx, 2) + pow(h.y3 - c.cy, 2)); /* od tacke 3 do centra */
	strana3 = sqrt(pow(h.x2 - c.cx, 2) + pow(h.y2 - c.cy, 2)); /* od tacke 2 do centra */
	S = (strana1 + strana2 + strana3) / 2; /* poluobim "kriske" 2 */
	povKriske = sqrt(S * (S - strana1) * (S - strana2) * (S - strana3));
	povSestougla += povKriske;
	/* povrsina trougla "kriske" 3 */
	strana1 = sqrt(pow(h.x4 - h.x3, 2) + pow(h.y4 - h.y3, 2)); /* od tacke 4 do tacke 3 */
	strana2 = sqrt(pow(h.x4 - c.cx, 2) + pow(h.y4 - c.cy, 2)); /* od tacke 4 do centra */
	strana3 = sqrt(pow(h.x3 - c.cx, 2) + pow(h.y3 - c.cy, 2)); /* od tacke 3 do centra */
	S = (strana1 + strana2 + strana3) / 2; /* poluobim "kriske" 3 */
	povKriske = sqrt(S * (S - strana1) * (S - strana2) * (S - strana3));
	povSestougla += povKriske;
	/* povrsina trougla "kriske" 4 */
	strana1 = sqrt(pow(h.x5 - h.x4, 2) + pow(h.y5 - h.y4, 2)); /* od tacke 5 do tacke 4 */
	strana2 = sqrt(pow(h.x5 - c.cx, 2) + pow(h.y5 - c.cy, 2)); /* od tacke 5 do centra */
	strana3 = sqrt(pow(h.x4 - c.cx, 2) + pow(h.y4 - c.cy, 2)); /* od tacke 4 do centra */
	S = (strana1 + strana2 + strana3) / 2; /* poluobim "kriske" 4 */
	povKriske = sqrt(S * (S - strana1) * (S - strana2) * (S - strana3));
	povSestougla += povKriske;
	/* povrsina trougla "kriske" 5 */
	strana1 = sqrt(pow(h.x6 - h.x5, 2) + pow(h.y6 - h.y5, 2)); /* od tacke 6 do tacke 5 */
	strana2 = sqrt(pow(h.x6 - c.cx, 2) + pow(h.y6 - c.cy, 2)); /* od tacke 6 do centra */
	strana3 = sqrt(pow(h.x5 - c.cx, 2) + pow(h.y5 - c.cy, 2)); /* od tacke 5 do centra */
	S = (strana1 + strana2 + strana3) / 2; /* poluobim "kriske" 5 */
	povKriske = sqrt(S * (S - strana1) * (S - strana2) * (S - strana3));
	povSestougla += povKriske;
	/* povrsina trougla "kriske" 6 */
	strana1 = sqrt(pow(h.x1 - h.x6, 2) + pow(h.y1 - h.y6, 2)); /* od tacke 1 do tacke 6 */
	strana2 = sqrt(pow(h.x1 - c.cx, 2) + pow(h.y1 - c.cy, 2)); /* od tacke 1 do centra */
	strana3 = sqrt(pow(h.x6 - c.cx, 2) + pow(h.y6 - c.cy, 2)); /* od tacke 6 do centra */
	S = (strana1 + strana2 + strana3) / 2; /* poluobim "kriske" 6 */
	povKriske = sqrt(S * (S - strana1) * (S - strana2) * (S - strana3));
	povSestougla += povKriske;
	return povKriske;
}
int main()
{
	int N, i;
	float ukupnaPovrsina = 0.0;
	Hexagon* h;
	scanf("%d", &N);
	h = (Hexagon*)malloc(N * sizeof(Hexagon));
	if (h)
	{
		for (i = 0; i < N; i++)
		{
			scanf("%f%f", &h[i].x1, &h[i].y1);
			scanf("%f%f", &h[i].x2, &h[i].y2);
			scanf("%f%f", &h[i].x3, &h[i].y3);
			scanf("%f%f", &h[i].x4, &h[i].y4);
			scanf("%f%f", &h[i].x5, &h[i].y5);
			scanf("%f%f", &h[i].x6, &h[i].y6);
		}
		for (i = 0; i < N; i++)
		{
			if (Iznad(h[i])) ukupnaPovrsina += Povrsina(h[i]);
			
		}
		printf("%f", ukupnaPovrsina);
		free(h);
	}
	return 0;
}
