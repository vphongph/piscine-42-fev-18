find . -name "*.sh" | sed "s/\.sh$//" | rev | cut -f 1 -d / | rev
