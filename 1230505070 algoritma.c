#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
typedef  kullanýlarak struct türüne adlari atadým.
 */

typedef struct{ //struct icinde istenilen degiskeni tanimladik.
			int a;
			int katilimci_sayisi;
			int teklifveren_sayisi;
			teklifStruct[]teklifler;
		}beyza;
int main() {
	    beyza a;
		double odeme; //veri tiplerini tanimladim.
		int i;
		int kazanan_no;
		odeme=0;
		i=0;
	for(i=0;a.katilimci_sayisi;i++)//for dongusu kullanip ifle olasýlýklarý yaptim.
	{
		if(i!=kazanan_no){
			odeme+=a.teklifler[i].teklif;
		}
	}
	printf("odeme %d dir",odeme);
		double enyuksek_teklif; //degerleri tanimladim.
	    int kazanan_no;
	    enyuksek_teklif=-1.0
	    kazanan_no=-1
	    for(i=0;a.teklifveren_sayisi;i++){//dongu kurdum.
	    	if(a.teklifler[i].teklif>enyuksek_teklif){
			enyuksek_teklif=a.teklif[i].teklif;
			kazanan_no=i;
					}
	}
	printf("kazanan teklif sahibini goster");//yazdirdim.
	odeme=odemeyi_hesapla(a,kazanan_no);
	printf("odemeyi goster");
	
	return 0;
}
