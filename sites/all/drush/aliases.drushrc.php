<?php
$aliases['dev'] = array(
	'uri'=> 'markwoolsey.ccistaging.com',
	'root' => '/home/staging/subdomains/markwoolsey/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),
	'ssh-options'=>'-p 37241'
);

$aliases['live'] = array(
	'uri'=> 'sarniahouses.ca',
	'root' => '/home/sarniahouses/subdomains/live/public_html',
	'remote-host'=> 'host.cciserver2.com',
	'remote-user'=> 'sarniahouses',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),
	
);

