from gpiozero import Button

button = Button(2)

while True:
	if button.is_pressed:
		print("Przycisk nacisniety")
	else:
		print("Przycisk nie nacisniety")
