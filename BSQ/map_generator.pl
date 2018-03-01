#!/usr/bin/perl
use warnings;
use strict;
open(my $fh, '>', 'example_file_2');
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print $fh "$y"."123\n";
for (my $i = 0; $i < $y; $i++) {
    for (my $j = 0; $j < $x; $j++) {
if (int(rand($y) * 2) < $density) {
    print $fh "2";
}
else {
print $fh "1"; }
}
print $fh "\n"; }

close $fh;
