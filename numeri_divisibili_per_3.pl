#! /usr/bin/env perl

use strict ;

print "Da quanto vuoi partire? " ;
my $partenza=<STDIN> ;
chomp $partenza ;

print "A quanto vuoi arrivare? " ;
my $arrivo = <STDIN> ;
chomp $arrivo ;

print "per quale numero devo trovare i divisibili?  " ;
my $step = <STDIN> ;
chomp $step ;

my $i = $partenza ;
my $count = 0 ; 

while ($i <= $arrivo) {
	if ( ($i % $step ) == 0 ) {
		print "$i\n" ;
	}
	$i++ ;
}
