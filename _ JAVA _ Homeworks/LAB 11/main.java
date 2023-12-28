import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

public class main {

    public static void main(String[] args) {
        Collection<bankAccount> myAccounts = new ArrayList<>();

        bankAccount b1 = new bankAccount(1, "enes", 1000);
        bankAccount b2 = new bankAccount(2, "ahmet", 2000);
        bankAccount b3 = new bankAccount(3, "selim", 3000);
        bankAccount b4 = new bankAccount(4, "omer", 4000);

        myAccounts.add(b1);
        myAccounts.add(b2);
        myAccounts.add(b3);
        myAccounts.add(b4);

        Iterator<bankAccount> iter = myAccounts.iterator();
        while (iter.hasNext()) {
            iter.next().balance -= 500;
        }

        iter = myAccounts.iterator(); // sıfırlama yapıyor

        while (iter.hasNext()) {
            System.out.println(iter.next().balance);
        }
    }
}
