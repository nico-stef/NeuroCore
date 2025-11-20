import os

def count_characters_in_file(input_path):
    with open(input_path, 'r', encoding='utf-8') as f:
        content = f.read()
    return len(content)

def main():
    dir_name = "python_file"
    os.makedirs(dir_name, exist_ok=True)

    input_file = os.path.join(dir_name, "input.txt")
    output_file = os.path.join(dir_name, "output.txt")

    # Check if input file exists
    if not os.path.isfile(input_file):
        print(f"Input file '{input_file}' nu există. Te rog adaugă-l înainte de a rula scriptul.")
        return

    char_count = count_characters_in_file(input_file)

    with open(output_file, 'w', encoding='utf-8') as f:
        f.write(f"Numărul de caractere din fișierul '{input_file}': {char_count}\n")

    print(f"Numărul de caractere a fost scris în '{output_file}'.")

if __name__ == "__main__":
    main()
