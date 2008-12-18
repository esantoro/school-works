import java.io.* ;

class traslitterazione {
	public static void main(String args[]) throws Exception {
		
		String valori[] =  {"unita'" , "decine" , "centinaia" , 
				"migliaia" , "decine di migliaia" , 
				"centinaia di migliaia" , "milioni" , 
				"DECINE DI MILIONi", "centinaia di milioni",
				"miliardi" , "decine di miliardi", "centinaia di miliardi",
				"migliaia di miliardi" , "decine di migliaia di miliardi",
				"centinaia di migliaia di miliardi"} ;
		
		BufferedReader rdr = new  BufferedReader( new InputStreamReader(System.in) ) ;

		int numero = 0 ;
	
		System.out.print("Quale numero vuoi traslitterare (da 0 a 999)? ") ;
		String num_str = rdr.readLine() ;
		System.out.println() ;


		int num_numeri = num_str.length() ;
		num_numeri-- ;
		int i ;
	
		for ( i=0 ; i <= num_numeri  ; i++ ) {
			System.out.print( num_str.charAt(num_numeri - i)) ;
			System.out.println(" " + valori[i]);
		}
	}
}
