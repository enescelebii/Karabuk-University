
public class point3d extends point2d {
	private int z = 0;

	public point3d(int x, int y, int z) {
		super(x, y);
		this.z = z;
	}

	public point3d() {
		this(10, 20, 30);
	}

	public int getZ() {
		return z;
	}

	public void setZ(int z) {
		this.z = z;
	}

	@Override
	public String toString() {
		return "(" + super.getX() + "," + super.getY() + "," + z + ")";
	}

}
