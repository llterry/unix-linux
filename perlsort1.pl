#!/usr/bin/perl
# Program name: perlsort1.pl
# Purpose: Sort a list of names contained inside an array
# Syntax: perlsort1.pl <Enter>
#========================================================
@somelist = ("Oranges", "Apples", "Tangerines", "Pears",
 "Bananas", "Pineapples");
@sortedlist = sort @somelist;
print "@sortedlist";
print "\n";
