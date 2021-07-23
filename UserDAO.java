package user;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

public class UserDAO {
	
	private Connection conn;
	private PreparedStatement pstat;
	private ResultSet rs;

	public UserDAO() {
		try {
			String dbURL = "jdbc:mysql://localhost:3305/BBS";
			String dbID = "root";
			String dbPW = "!qudtls18";
			Class.forName("com.mysql.jdbc.Driver");
			conn = DriverManager.getConnection(dbURL, dbID, dbPW);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	public int login(String userID, String userPW) {
		String SQL = "SELECT userPW FROM WHERE userID = ?";
		try {
			pstat = conn.prepareStatement(SQL);
			pstat.setString(1, userID);
			rs = pstat.executeQuery();
			if (rs.next() ) {
				if (rs.getString(1).equals(userPW)) {
					return 1; //login success
				}
				else 
					return 0; //PW wrong
			}
			return -1; //NO ID
		} catch (Exception e) {
			e.printStackTrace();
		}
		return -2; //DB error
	}
}
