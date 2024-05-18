import tkinter as tk

def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b == 0:
        return "Ошибка: деление на ноль невозможно"
    return a / b

def calculate():
    num1 = float(entry_num1.get())
    num2 = float(entry_num2.get())
    operation = operation_var.get()

    if operation == "+":
        result = add(num1, num2)
    elif operation == "-":
        result = subtract(num1, num2)
    elif operation == "*":
        result = multiply(num1, num2)
    elif operation == "/":
        result = divide(num1, num2)
    else:
        result = "Неизвестная операция"

    output_label.config(text=f"Результат: {result}")

root = tk.Tk()
root.title("Простой калькулятор")

entry_num1 = tk.Entry(root, width=10)
entry_num2 = tk.Entry(root, width=10)

operation_var = tk.StringVar(root)
operation_var.set("+")

operation_plus = tk.Radiobutton(root, text="+", variable=operation_var, value="+")
operation_minus = tk.Radiobutton(root, text="-", variable=operation_var, value="-")
operation_multiply = tk.Radiobutton(root, text="*", variable=operation_var, value="*")
operation_divide = tk.Radiobutton(root, text="/", variable=operation_var, value="/")

calculate_button = tk.Button(root, text="Рассчитать", command=calculate)

output_label = tk.Label(root, text="")

entry_num1.grid(row=0, column=0)
entry_num2.grid(row=0, column=1)

operation_plus.grid(row=1, column=0)
operation_minus.grid(row=2, column=0)
operation_multiply.grid(row=3, column=0)
operation_divide.grid(row=4, column=0)

calculate_button.grid(row=1, column=1)

output_label.grid(row=2, column=1)

root.mainloop()
