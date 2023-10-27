package bank_account;

public class Bank {
	private int password;
	private int balance = 2500;
	
	
	public int getBalance() {
		return balance;}
	public void setPassword(int pass) {
		this.password = pass;
	}
	public int getPassword() {
		return password;
	}
	public void setBalance(int money) {
		this.balance = money;
	}
}