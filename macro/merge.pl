#!/usr/bin/perl

for($ii=51; $ii<92; $ii++){

	$cmd = "hadd -f calibration_${ii}.root ${ii}/calibration*";

	print $cmd."\n";

	system $cmd;

}
