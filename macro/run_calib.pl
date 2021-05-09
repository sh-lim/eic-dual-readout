#!/usr/bin/perl

for($ii=51; $ii<92; $ii++){

	$cmd = "./calib calibration_${ii} ${ii}";
	print $cmd."\n";
	system $cmd;

	$cmd = "mv *.png png/";
	print $cmd."\n";
	system $cmd;

}
