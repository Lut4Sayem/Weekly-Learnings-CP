#!/bin/bash

# Navigate to the folder where this script is located
cd "$(dirname "$0")" || exit

# Pull latest changes (to avoid conflicts)
git pull --rebase origin main

# Add .gitkeep to empty folders so Git can track them
for folder in */; do
    if [ -d "$folder" ] && [ -z "$(ls -A "$folder")" ]; then
        echo "📂 Empty folder detected: $folder"
        touch "$folder/.gitkeep"
    fi
done

# Add all changes
git add .

# Commit and push if there are new changes
if git diff --cached --quiet; then
    echo "⚠️ No new files or changes detected. Skipping commit."
else
    git commit -m "Weekly learning update - New files added"
    git push origin main
    echo "✅ Weekly learnings uploaded successfully!"
fi
