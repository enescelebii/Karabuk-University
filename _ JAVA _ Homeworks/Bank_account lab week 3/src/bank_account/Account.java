package bank_account;

import java.util.Scanner;

public class Account {

    public static void main(String[] args) {
        int money = 0, denemeHakki = 0;
        try (Scanner input = new Scanner(System.in)) {
			Bank musteri1 = new Bank();
			System.out.println("Banka hesabı için şifre belirleyin: ");
			musteri1.setPassword(input.nextInt());
			System.out.println("Şifreniz belirlenmiştir...");
			while(true) {
				System.out.println("Lütfen giriş yapınız, şifre?: ");
				if (musteri1.getPassword() == input.nextInt()) {
				    while (true) {
				        System.out.println("Şifre doğru✔");
				        while (true) {
				            System.out.println("Çekmek istediğiniz miktarı girin\nÇekebileceğiniz maksimum miktar: " + musteri1.getBalance());
				            money = input.nextInt();
				            if (money > musteri1.getBalance()) {
				                System.out.println("ATM'de bu kadar para bulunmamaktadır. Lütfen tekrar deneyin.");
				            } else {
				                musteri1.setBalance(musteri1.getBalance() - money);
				                if(musteri1.getBalance()==0) {
				            		System.out.println("Bankada para kalmadi.\nIyi gunler dilerm");
				            		System.exit(0);
				            	}
				                System.out.println("Kalan çekebileceğiniz bakiye: " + musteri1.getBalance());
				                break;
				            }
				        }
				    }
				}else {
				        if (denemeHakki > 2) {
				            System.out.println("Hesabınız bloke olmuştur.\niyi gunler dilerim");
				            return;
				        }
				        System.out.println("Şifre yanlış, kalan deneme hakkı: " + (3 - denemeHakki));
				        denemeHakki += 1;
				    }
			}
			
		}
        }
    }
