# ICPC Asia Jakarta Regional Contest
Hello and welcome to the ICPC Asia Jakarta Regional contest in 2024 (mirror version)

**For ease of coding, try using the [template](./src/template.cpp) file in addition to the following.**


## Repository Structure
Each team member has their own unique folder to work on their solutions or experiments. The repository follows this structure:
```bash
.
├── src/        # codes
├── .gitignore  # Ignoring unnecessary files
├── README.md   # Collaboration guide
└── update.py   # Script to automate Git pull/push
```

Each person should only work in their assigned folder to avoid **conflicts**.

## Initial Setup
1. Clone the repository:
    ```bash
    git clone https://github.com/ctrl-alt-Defeat-icpc/AJR2024
    ```
2. you should write your solutions in your own folder!
3. Ensure the .gitignore file is in place to keep unnecessary files out of the repository.

## Working Together
#### Syncing with the Repository
To keep your local repository up-to-date and push your changes, use the `update.py` script.
```bash
python update.py
```
or
```bash
python3 update.py
```

This will:
* Pull the latest changes from the repository.
* Add and commit changes in your folder.
* Push your changes back to the repository.

<details><summary><strong>Solving Conflicts</strong></summary>

If you encounter merge conflicts:
1. Identify the conflicting files in the Git output.
2. Open the files and manually resolve the conflicts.
3. After resolving conflicts:
```bash
python update.py
```

</details><br>

Let’s collaborate effectively and do our best in the competition! 🎉