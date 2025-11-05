#python3 -m streamlit run fitness_app.py
import streamlit as st
import pandas as pd
import random
from datetime import datetime

# ----------------------------
# App Setup
# ----------------------------
st.set_page_config(
    page_title="💪 Daily Fitness & Motivation App",
    page_icon="💫",
    layout="centered"
)

st.title("💪 Daily Fitness & Motivation App")

# Initialize session state
if "streak" not in st.session_state:
    st.session_state.streak = 3
if "progress" not in st.session_state:
    st.session_state.progress = 0
if "reflections" not in st.session_state:
    st.session_state.reflections = pd.DataFrame(columns=["Date", "Mood", "Notes"])

# ----------------------------
# SECTION 1: Greeting & Motivation
# ----------------------------
st.header("🌞 Greeting & Motivation")

name = st.text_input("Enter your name:", value="Champion")
vibe = st.selectbox("Pick today’s vibe:", ["Focused 🎯", "Energized ⚡", "Chill 🌿", "Beast Mode 🔥"])

if st.button("Start My Day 💫"):
    emoji = vibe.split()[-1]
    st.success(f"Hey {name}! {emoji} Ready to move, sweat, and shine today?")
    
    tone = {
        "Focused 🎯": "Let's lock in and make today count. 🎯",
        "Energized ⚡": "Let's blast through limits today! ⚡",
        "Chill 🌿": "Smooth moves and steady breath. 🌿",
        "Beast Mode 🔥": "Go full throttle. Leave it all out there. 🔥"
    }[vibe]
    
    st.write(f"**{tone}**")

# ----------------------------
# SECTION 2: Daily Cardio Routine
# ----------------------------
st.header("🏃‍♀️ Daily Cardio Routine")

st.markdown("""
💓 **Today’s Cardio Plan**
Choose your cardio adventure:
1️⃣ Jog or run – 25 min (mix slow & fast intervals)  
2️⃣ Jump rope – 10 min high intensity  
3️⃣ Dance cardio – 20 min fun movement  
4️⃣ Cycling – 30 min outdoor/indoor ride  
💡 *Pro Tip: Alternate between 1 min push + 2 min recovery. 💧 Don’t forget to hydrate halfway through!*
""")

if st.button("Select My Cardio 🔁"):
    cardio = random.choice([
        "🏃 Jog Intervals – 25 min",
        "🤾 Jump Rope – 10 min HIIT",
        "💃 Dance Cardio – 20 min",
        "🚴 Cycling – 30 min"
    ])
    st.session_state.progress = 0
    st.info(f"Today's cardio: **{cardio}**")

if "progress" in st.session_state:
    st.session_state.progress = min(st.session_state.progress + 25, 100)
    st.progress(st.session_state.progress / 100)
    if st.session_state.progress < 100:
        st.caption("🔥 Keep going! You’re crushing it!")
    else:
        st.balloons()
        st.success("🎉 Cardio Complete! Legend mode unlocked!")

# ----------------------------
# SECTION 3: Daily Strength & Wellness Tasks
# ----------------------------
st.header("💪 Strength & Wellness Tasks")

st.markdown("""
🔥 **Today’s Strength Circuit:**  
- 15 Squats × 3 sets  
- 10 Push-ups × 3 sets  
- 30-sec Plank × 3  
- 20 Jumping Jacks between each set  

🧘 **Cool Down:**  
5 min stretching  
5 deep breaths  
3 things you’re grateful for ✨
""")

tasks = [
    "✅ 15 Squats × 3",
    "✅ 10 Push-ups × 3",
    "✅ 30-sec Plank × 3",
    "✅ 20 Jumping Jacks",
    "✅ Stretch & Breathe"
]

completed = []
for task in tasks:
    if st.checkbox(task):
        completed.append(task)

if len(completed) == len(tasks):
    st.balloons()
    st.success("🔥 All tasks complete! You're unstoppable!")

# ----------------------------
# SECTION 4: Progress & Streak Tracking
# ----------------------------
st.header("📈 Progress & Streak Tracking")

st.write(f"🔥 You’ve worked out **{st.session_state.streak} days** in a row! Keep that streak alive 💪")

st.bar_chart([1] * st.session_state.streak)

# ----------------------------
# SECTION 5: Reflection & Community
# ----------------------------
st.header("💭 Reflection & Community")

mood = st.radio("How did today’s workout make you feel?",
                ["😊 Energized", "😌 Calm", "😐 Neutral", "🥵 Tired"])
notes = st.text_area("Write your reflection or gratitude notes:")

if st.button("Save Reflection ✨"):
    new_entry = pd.DataFrame({
        "Date": [datetime.now().strftime("%Y-%m-%d")],
        "Mood": [mood],
        "Notes": [notes]
    })
    st.session_state.reflections = pd.concat([st.session_state.reflections, new_entry], ignore_index=True)
    st.success("Reflection saved successfully 💫")

st.write("### 📔 Your Reflection Journal")
st.dataframe(st.session_state.reflections)

st.write("""
🏅 **Community Challenge:**  
“Run 2 miles before 8 PM” — share your stats and cheer others on!  
_Leaderboard feature coming soon..._ 🚀
""")

# ----------------------------
# SECTION 6: Nighttime Wind-Down
# ----------------------------
st.header("🌙 Nighttime Wind-Down")

st.write(f"🌙 Great work today, **{name}!**")
st.markdown("""
Take 5 minutes to stretch and relax before bed.  
Tomorrow’s goal drops at **7 AM** — rest up, champ. 💤💪  
""")

st.caption("💤 Tip: Try a 3-minute guided meditation or gentle music before bed.")

# ----------------------------
# Footer
# ----------------------------
st.markdown("---")
st.markdown("Made with ❤️ in Streamlit • Stay strong, stay grateful ✨")
