<?php
		$name = "Rifqi Rizaldi Putra";
		$age	= 23;
		$addres = "Jondul 1 Blok K No 10 Tabing Padang";
		$hobbies = ["Music", "Football"];
		$is_married = false;
		$school = [
							"highSchool" => "SMA NEGERI 8 PADANG",
							"university" => "Univeristas Sriwijaya"];
		$interest_in_coding = true; 

	
		function biodata($name, $age, $addres, $hobbies, $is_married, $school, $interest_in_coding){
	return json_encode([
		'name' => $name,
		'age' => $age,
		'address' => $addres,
		'hobbies' => $hobbies,
		'is_married' => $is_married,
		'schools' => $school,
		'interest_in_coding' => $interest_in_coding
	],
	JSON_PRETTY_PRINT
);
		};
echo biodata($name, $age, $addres, $hobbies, $is_married, $school, $interest_in_coding);